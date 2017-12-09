using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMissionsPluginRegionLocaleChangedEvent
    {
        [DataMember(Name = "locale")]
        public string Locale { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMissionsPluginRegionLocaleChangedEvent {\n");
            sb.Append("  Locale: ").Append(Locale).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}