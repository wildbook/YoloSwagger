using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ThemeVp
    {
        [DataMember(Name = "themeId")]
        public int ThemeId { get; set; }

        [DataMember(Name = "themeVp")]
        public int _ThemeVp { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ThemeVp {\n");
            sb.Append("  ThemeId: ").Append(ThemeId).Append("\n");
            sb.Append("  _ThemeVp: ").Append(_ThemeVp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}