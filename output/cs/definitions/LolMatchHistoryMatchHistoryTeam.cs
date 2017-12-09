using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchHistoryMatchHistoryTeam
    {
        [DataMember(Name = "bans")]
        public LolMatchHistoryMatchHistoryTeamBan[] Bans { get; set; }

        [DataMember(Name = "baronKills")]
        public uint BaronKills { get; set; }

        [DataMember(Name = "dominionVictoryScore")]
        public uint DominionVictoryScore { get; set; }

        [DataMember(Name = "dragonKills")]
        public uint DragonKills { get; set; }

        [DataMember(Name = "firstBaron")]
        public bool FirstBaron { get; set; }

        [DataMember(Name = "firstBlood")]
        public bool FirstBlood { get; set; }

        [DataMember(Name = "firstDargon")]
        public bool FirstDargon { get; set; }

        [DataMember(Name = "firstInhibitor")]
        public bool FirstInhibitor { get; set; }

        [DataMember(Name = "firstTower")]
        public bool FirstTower { get; set; }

        [DataMember(Name = "inhibitorKills")]
        public uint InhibitorKills { get; set; }

        [DataMember(Name = "teamId")]
        public ushort TeamId { get; set; }

        [DataMember(Name = "towerKills")]
        public uint TowerKills { get; set; }

        [DataMember(Name = "vilemawKills")]
        public uint VilemawKills { get; set; }

        [DataMember(Name = "win")]
        public string Win { get; set; }

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