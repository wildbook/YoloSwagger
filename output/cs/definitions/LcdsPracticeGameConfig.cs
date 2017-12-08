using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LcdsPracticeGameConfig
    {
        [DataMember(Name = "maxNumPlayers")]
        int MaxNumPlayers { get; set; }

        [DataMember(Name = "gameMode")]
        string GameMode { get; set; }

        [DataMember(Name = "allowSpectators")]
        string AllowSpectators { get; set; }

        [DataMember(Name = "gameName")]
        string GameName { get; set; }

        [DataMember(Name = "gameMap")]
        LcdsGameMap GameMap { get; set; }

        [DataMember(Name = "passbackUrl")]
        string PassbackUrl { get; set; }

        [DataMember(Name = "gameMutators")]
        string[] GameMutators { get; set; }

        [DataMember(Name = "passbackDataPacket")]
        string PassbackDataPacket { get; set; }

        [DataMember(Name = "gamePassword")]
        string GamePassword { get; set; }

        [DataMember(Name = "gameTypeConfig")]
        int GameTypeConfig { get; set; }

        [DataMember(Name = "region")]
        string Region { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LcdsPracticeGameConfig {\n");
            sb.Append("  MaxNumPlayers: ").Append(MaxNumPlayers).Append("\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  AllowSpectators: ").Append(AllowSpectators).Append("\n");
            sb.Append("  GameName: ").Append(GameName).Append("\n");
            sb.Append("  GameMap: ").Append(GameMap).Append("\n");
            sb.Append("  PassbackUrl: ").Append(PassbackUrl).Append("\n");
            sb.Append("  GameMutators: ").Append(GameMutators).Append("\n");
            sb.Append("  PassbackDataPacket: ").Append(PassbackDataPacket).Append("\n");
            sb.Append("  GamePassword: ").Append(GamePassword).Append("\n");
            sb.Append("  GameTypeConfig: ").Append(GameTypeConfig).Append("\n");
            sb.Append("  Region: ").Append(Region).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}