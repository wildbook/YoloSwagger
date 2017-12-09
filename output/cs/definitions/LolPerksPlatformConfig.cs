using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPerksPlatformConfig
    {
        [DataMember(Name = "PerksEnabled")]
        public bool PerksEnabled { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksPlatformConfig {\n");
            sb.Append("  PerksEnabled: ").Append(PerksEnabled).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}