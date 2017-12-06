using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPerksPlayerPreferencesSettings
    {
        [DataMember(Name = "pages")]
        LolPerksPerkPageResource[] Pages { get; set; }

        [DataMember(Name = "settings")]
        LolPerksUISettings Settings { get; set; }

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