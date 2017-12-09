using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashThemeVp
    {
        [DataMember(Name = "themeId")]
        public int ThemeId { get; set; }

        [DataMember(Name = "vp")]
        public int Vp { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashThemeVp {\n");
            sb.Append("  ThemeId: ").Append(ThemeId).Append("\n");
            sb.Append("  Vp: ").Append(Vp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}