ImGui::Text("Map Radar");
                ImGui::SameLine();
                if (ImGui::Button("Map Radar##a", ImVec2(100, 30)))
                {
                    uintptr_t pLocal = Drv.read<uintptr_t>(Globals::modBase + OFFSET_LOCAL_ENT);

                    int defTeam = Drv.read<int>(pLocal + OFFSET_TEAM);

                    for (uintptr_t i = 0; i <= 80000; i++)
                    {
                        Drv.write<int>(pLocal + OFFSET_TEAM, 1);
                    }

                    for (uintptr_t i = 0; i <= 80000; i++)
                    {
                        Drv.write<int>(pLocal + OFFSET_TEAM, defTeam);
                    }