using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameflowGameflowGameMap
    {
        [DataMember(Name = "assets")]
        public dynamic Assets { get; set; }

        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "gameMode")]
        public string GameMode { get; set; }

        [DataMember(Name = "gameModeName")]
        public string GameModeName { get; set; }

        [DataMember(Name = "gameModeShortName")]
        public string GameModeShortName { get; set; }

        [DataMember(Name = "gameMutator")]
        public string GameMutator { get; set; }

        [DataMember(Name = "id")]
        public long Id { get; set; }

        [DataMember(Name = "isRGM")]
        public bool IsRGM { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "platformId")]
        public string PlatformId { get; set; }

        [DataMember(Name = "platformName")]
        public string PlatformName { get; set; }

        [DataMember(Name = "properties")]
        public dynamic Properties { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameflowGameflowGameMap {\n");
            sb.Append("  Assets: ").Append(Assets).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  GameModeName: ").Append(GameModeName).Append("\n");
            sb.Append("  GameModeShortName: ").Append(GameModeShortName).Append("\n");
            sb.Append("  GameMutator: ").Append(GameMutator).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsRGM: ").Append(IsRGM).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
            sb.Append("  PlatformName: ").Append(PlatformName).Append("\n");
            sb.Append("  Properties: ").Append(Properties).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}