BUILD_DIR = build
SRC_DIR = src
PHYSICS_DIR = src/particle-engine
CFLAGS = -Wall

all: create_bin

create_bin: ${BUILD_DIR}/main.o ${BUILD_DIR}/physics_interactions.o
	@echo "Linking object files"
	gcc ${BUILD_DIR}/main.o ${BUILD_DIR}/physics_interactions.o \
		-o ${BUILD_DIR}/a.out

${BUILD_DIR}/main.o: ${SRC_DIR}/main.c
	@echo "Compiling main file"
	gcc ${CFLAGS} ${SRC_DIR}/main.c -c -o ${BUILD_DIR}/main.o

${BUILD_DIR}/physics_interactions.o: ${PHYSICS_DIR}/physics_interactions.c
	@echo "Compiling physics interactions"
	gcc ${CFLAGS} ${PHYSICS_DIR}/physics_interactions.c -c \ 
		-o ${BUILD_DIR}/physics_interactions.o

run: all
	chmod +x ${BUILD_DIR}/a.out
	@echo ""
	@echo "Running binary"
	./${BUILD_DIR}/a.out

clean:
