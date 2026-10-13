
package com.example;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.stage.Stage;

public class MainApp extends Application {

    @Override
    public void start(Stage stage) throws Exception {
        FXMLLoader loader = new FXMLLoader(
            MainApp.class.getResource("/com/example/main-view.fxml")
        );

        Scene scene = new Scene(loader.load(), 500, 450);

        stage.setTitle("JavaFX Label and ImageView");
        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
