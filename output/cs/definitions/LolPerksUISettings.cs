using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPerksUISettings
    {
        [DataMember(Name = "gridModeEnabled")]
        public bool GridModeEnabled { get; set; }

        [DataMember(Name = "showLongDescriptions")]
        public bool ShowLongDescriptions { get; set; }

        [DataMember(Name = "showPresetPages")]
        public bool ShowPresetPages { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksUISettings {\n");
            sb.Append("  GridModeEnabled: ").Append(GridModeEnabled).Append("\n");
            sb.Append("  ShowLongDescriptions: ").Append(ShowLongDescriptions).Append("\n");
            sb.Append("  ShowPresetPages: ").Append(ShowPresetPages).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}