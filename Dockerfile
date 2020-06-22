FROM hexletbasics/base-image:latest

WORKDIR /exercises-cpp

COPY --from=hexletbasics/base-image:latest /tmp/basics/common/* ./
COPY . .
