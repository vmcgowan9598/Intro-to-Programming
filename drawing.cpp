Graphics^ pg = CreateGraphics();
      // Get a Pen
      Pen^ pen1 = gcnew Pen(Color::Red);
      // Draw a line
      pg->DrawLine(pen1, 20, 20, 100, 250);
      Pen^ pen2 = gcnew Pen(Color::Green);
      // Draw a triangle
      pg->DrawLine(pen2, 150, 150, 450, 150);
      pg->DrawLine(pen2, 150, 150, 300, 300);
      pg->DrawLine(pen2, 450, 150, 300, 300);
      // Draw a line
      Pen^ pen3 = gcnew Pen(Color::Blue, 3.0);
      pg->DrawLine(pen3, 10, 120, 250, 60);

      // Draw a filled rectangle
      SolidBrush^ sb1 = gcnew SolidBrush(Color::Red);
      pg->FillRectangle(sb1, 60, 30, 40, 40);

      // Draw a filled and outlined rectangle
      SolidBrush^ sb2 = gcnew SolidBrush(Color::Yellow);
      pg->FillRectangle(sb2, 90, 40, 45, 45);
      pg->DrawRectangle(pen1, 90, 40, 45, 45);

      // Draw a filled ellipse
      SolidBrush^ sb3 = gcnew SolidBrush(Color::Green);
      pg->FillEllipse(sb3, 30, 100, 65, 50);

      // Dispose of the Graphics object
      delete pg;
