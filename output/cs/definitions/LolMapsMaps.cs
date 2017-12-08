using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMapsMaps
    {
        [DataMember(Name = "properties")]
        dynamic Properties { get; set; }

        [DataMember(Name = "isRGM")]
        bool IsRGM { get; set; }

        [DataMember(Name = "assets")]
        Dictionary<string, string> Assets { get; set; }

        [DataMember(Name = "platformId")]
        string PlatformId { get; set; }

        [DataMember(Name = "platformName")]
        string PlatformName { get; set; }

        [DataMember(Name = "description")]
        string Description { get; set; }

        [DataMember(Name = "gameMode")]
        string GameMode { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "gameMutator")]
        string GameMutator { get; set; }

        [DataMember(Name = "gameModeName")]
        string GameModeName { get; set; }

        [DataMember(Name = "gameModeDescription")]
        string GameModeDescription { get; set; }

        [DataMember(Name = "id")]
        long Id { get; set; }

        [DataMember(Name = "isDefault")]
        bool IsDefault { get; set; }

        [DataMember(Name = "gameModeShortName")]
        string GameModeShortName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMapsMaps {\n");
            sb.Append("  Properties: ").Append(Properties).Append("\n");
            sb.Append("  IsRGM: ").Append(IsRGM).Append("\n");
            sb.Append("  Assets: ").Append(Assets).Append("\n");
            sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
            sb.Append("  PlatformName: ").Append(PlatformName).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  GameMutator: ").Append(GameMutator).Append("\n");
            sb.Append("  GameModeName: ").Append(GameModeName).Append("\n");
            sb.Append("  GameModeDescription: ").Append(GameModeDescription).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsDefault: ").Append(IsDefault).Append("\n");
            sb.Append("  GameModeShortName: ").Append(GameModeShortName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}