import { MongoClient } from "mongodb";

const run = async() => {
    const client = new MongoClient('mongodb://admin:qwerty@localhost:27017/');

    try {
        await client.connect();
        console.log("Connected to MongoDB");

        const db = client.db('mongodb_hello_world');
        const userCollection = db.collection('users');

        // write
        // await userCollection.insertOne({ name: 'Kanav Sharma', age: 27 });
        // await userCollection.insertMany([
        //   {name: "abc", age: 36},
        //   {name: 'cdd', age: 24},
        // ])

        // read
        // 1st method
        // const userCursor = await userCollection.find().toArray();
        // console.log(userCursor);
        // 2nd method
        // const userCursor = userCollection.find();
        // for await (const user of userCursor) {
        //   console.log(user);
        // }
        // 3rd method
        // const user = await userCollection.findOne({ name: 'abc' })
        // console.log(user, user._id.toHexString());
        
        
        // update
        // await userCollection.updateOne({name: 'abc'}, {$set: {age: 50}})


        // delete
        // await userCollection.deleteOne({name: 'abc'})
        
    } catch (error) {
        console.error("Error:", error);
    } finally {
        await client.close();
        console.log("MongoDB connection closed.");
        // process.exit(0);  // Forcefully exit the script
    }
}

run();