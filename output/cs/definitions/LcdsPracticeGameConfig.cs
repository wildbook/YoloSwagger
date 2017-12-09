using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LcdsPracticeGameConfig
    {
        [DataMember(Name = "allowSpectators")]
        public string AllowSpectators { get; set; }

        [DataMember(Name = "gameMap")]
        public LcdsGameMap GameMap { get; set; }

        [DataMember(Name = "gameMode")]
        public string GameMode { get; set; }

        [DataMember(Name = "gameMutators")]
        public string[] GameMutators { get; set; }

        [DataMember(Name = "gameName")]
        public string GameName { get; set; }

        [DataMember(Name = "gamePassword")]
        public string GamePassword { get; set; }

        [DataMember(Name = "gameTypeConfig")]
        public int GameTypeConfig { get; set; }

        [DataMember(Name = "maxNumPlayers")]
        public int MaxNumPlayers { get; set; }

        [DataMember(Name = "passbackDataPacket")]
        public string PassbackDataPacket { get; set; }

        [DataMember(Name = "passbackUrl")]
        public string PassbackUrl { get; set; }

        [DataMember(Name = "region")]
        public string Region { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LcdsPracticeGameConfig {\n");
            sb.Append("  AllowSpectators: ").Append(AllowSpectators).Append("\n");
            sb.Append("  GameMap: ").Append(GameMap).Append("\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  GameMutators: ").Append(GameMutators).Append("\n");
            sb.Append("  GameName: ").Append(GameName).Append("\n");
            sb.Append("  GamePassword: ").Append(GamePassword).Append("\n");
            sb.Append("  GameTypeConfig: ").Append(GameTypeConfig).Append("\n");
            sb.Append("  MaxNumPlayers: ").Append(MaxNumPlayers).Append("\n");
            sb.Append("  PassbackDataPacket: ").Append(PassbackDataPacket).Append("\n");
            sb.Append("  PassbackUrl: ").Append(PassbackUrl).Append("\n");
            sb.Append("  Region: ").Append(Region).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}