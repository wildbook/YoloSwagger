using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PluginRegionLocaleChangedEvent
    {
        [DataMember(Name = "locale")]
        public string Locale { get; set; }

        [DataMember(Name = "region")]
        public string Region { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PluginRegionLocaleChangedEvent {\n");
            sb.Append("  Locale: ").Append(Locale).Append("\n");
            sb.Append("  Region: ").Append(Region).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}