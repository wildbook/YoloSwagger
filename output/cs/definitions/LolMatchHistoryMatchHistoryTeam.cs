using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchHistoryMatchHistoryTeam
    {
        [DataMember(Name = "bans")]
        LolMatchHistoryMatchHistoryTeamBan[] Bans { get; set; }

        [DataMember(Name = "baronKills")]
        uint BaronKills { get; set; }

        [DataMember(Name = "dominionVictoryScore")]
        uint DominionVictoryScore { get; set; }

        [DataMember(Name = "dragonKills")]
        uint DragonKills { get; set; }

        [DataMember(Name = "firstBaron")]
        bool FirstBaron { get; set; }

        [DataMember(Name = "firstBlood")]
        bool FirstBlood { get; set; }

        [DataMember(Name = "firstDargon")]
        bool FirstDargon { get; set; }

        [DataMember(Name = "firstInhibitor")]
        bool FirstInhibitor { get; set; }

        [DataMember(Name = "firstTower")]
        bool FirstTower { get; set; }

        [DataMember(Name = "inhibitorKills")]
        uint InhibitorKills { get; set; }

        [DataMember(Name = "teamId")]
        ushort TeamId { get; set; }

        [DataMember(Name = "towerKills")]
        uint TowerKills { get; set; }

        [DataMember(Name = "vilemawKills")]
        uint VilemawKills { get; set; }

        [DataMember(Name = "win")]
        string Win { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryTeam {\n");
            sb.Append("  Bans: ").Append(Bans).Append("\n");
            sb.Append("  BaronKills: ").Append(BaronKills).Append("\n");
            sb.Append("  DominionVictoryScore: ").Append(DominionVictoryScore).Append("\n");
            sb.Append("  DragonKills: ").Append(DragonKills).Append("\n");
            sb.Append("  FirstBaron: ").Append(FirstBaron).Append("\n");
            sb.Append("  FirstBlood: ").Append(FirstBlood).Append("\n");
            sb.Append("  FirstDargon: ").Append(FirstDargon).Append("\n");
            sb.Append("  FirstInhibitor: ").Append(FirstInhibitor).Append("\n");
            sb.Append("  FirstTower: ").Append(FirstTower).Append("\n");
            sb.Append("  InhibitorKills: ").Append(InhibitorKills).Append("\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("  TowerKills: ").Append(TowerKills).Append("\n");
            sb.Append("  VilemawKills: ").Append(VilemawKills).Append("\n");
            sb.Append("  Win: ").Append(Win).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}