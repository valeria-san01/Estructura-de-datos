const readline = require('readline/promises');
const { stdin: input, stdout: output } = require('process');

async function main() {
    const rl = readline.createInterface({ input, output });
    
    let tareas = ["Estudiar JS", "Hacer ejercicio", "Comprar despensa", "Pagar facturas"];

    while (tareas.length > 0) {
        console.clear();
        console.log("=== LISTA DE TAREAS ACTUALES ===");
        
        tareas.forEach((tarea, index) => {
            console.log(`${index + 1}. ${tarea}`);
        });

        const entrada = await rl.question('\nIntroduce el número de la tarea que deseas eliminar (o 0 para salir): ');
        const opcion = parseInt(entrada);

        if (opcion === 0) {
            break;
        }

        const indiceReal = opcion - 1;

        if (indiceReal >= 0 && indiceReal < tareas.length) {
           
            const tareaEliminada = tareas.splice(indiceReal, 1)[0];
            
            console.log(`\n¡Éxito! Se ha eliminado: '${tareaEliminada}'`);
        } else {
            console.log("\nError: El número seleccionado no existe en la lista.");
        }

        await rl.question('\nPresiona Enter para continuar...');
    }

    console.clear();
    console.log("Programa finalizado. Tareas restantes:");
    tareas.forEach(tarea => {
        console.log(`- ${tarea}`);
    });

    rl.close();
}

main();