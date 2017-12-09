using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct HighlightsSettingsResource
    {
        [DataMember(Name = "data")]
        public HighlightsSettingsData Data { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class HighlightsSettingsResource {\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}