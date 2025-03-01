import { MongoClient } from "mongodb";

const client = new MongoClient('mongodb://127.0.0.1')
await client.connect()

const db = client.db('mongodb_hello_world')
const userCollection = db.collection('users')

userCollection.insertOne({ string: 'Hello World!!!' })