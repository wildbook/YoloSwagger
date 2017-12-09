using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct HighlightsConfig
    {
        [DataMember(Name = "invalidHighlightNameCharacters")]
        public string InvalidHighlightNameCharacters { get; set; }

        [DataMember(Name = "isHighlightsEnabled")]
        public bool IsHighlightsEnabled { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class HighlightsConfig {\n");
            sb.Append("  InvalidHighlightNameCharacters: ").Append(InvalidHighlightNameCharacters).Append("\n");
            sb.Append("  IsHighlightsEnabled: ").Append(IsHighlightsEnabled).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}