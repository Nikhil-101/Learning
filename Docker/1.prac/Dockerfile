# Use the official Node.js image as the base image
FROM node

# set up environment variables
ENV MONGO_DB_USERNAME=admin \
  MONGO_DB_PASSWORD=qwerty

# creating working directory
RUN mkdir -p /usr/local/app

# Set the working directory inside the container
WORKDIR /usr/local/app

# Copy package.json and package-lock.json to the working directory
COPY package*.json ./

# Install application dependencies
RUN npm install

# Copy the rest of the application code to the working directory
COPY . .

# Expose the port the app runs on
EXPOSE 3000

# Define the command to start the application
CMD ["npm", "start"]