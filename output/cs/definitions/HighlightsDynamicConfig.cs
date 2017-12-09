using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct HighlightsDynamicConfig
    {
        [DataMember(Name = "Enabled")]
        public bool Enabled { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class HighlightsDynamicConfig {\n");
            sb.Append("  Enabled: ").Append(Enabled).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}