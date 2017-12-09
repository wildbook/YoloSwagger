using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolFeaturedModesMaps
    {
        [DataMember(Name = "assets")]
        public Dictionary<string, string> Assets { get; set; }

        [DataMember(Name = "gameModeName")]
        public string GameModeName { get; set; }

        [DataMember(Name = "isRGM")]
        public bool IsRGM { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolFeaturedModesMaps {\n");
            sb.Append("  Assets: ").Append(Assets).Append("\n");
            sb.Append("  GameModeName: ").Append(GameModeName).Append("\n");
            sb.Append("  IsRGM: ").Append(IsRGM).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}