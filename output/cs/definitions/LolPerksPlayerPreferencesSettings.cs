using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPerksPlayerPreferencesSettings
    {
        [DataMember(Name = "pages")]
        public LolPerksPerkPageResource[] Pages { get; set; }

        [DataMember(Name = "settings")]
        public LolPerksUISettings Settings { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksPlayerPreferencesSettings {\n");
            sb.Append("  Pages: ").Append(Pages).Append("\n");
            sb.Append("  Settings: ").Append(Settings).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}