using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolCollectionsGameDataSplashMetadata
    {
        [DataMember(Name = "CalculatedColor")]
        public string CalculatedColor { get; set; }

        [DataMember(Name = "OverrideColor")]
        public string OverrideColor { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsGameDataSplashMetadata {\n");
            sb.Append("  CalculatedColor: ").Append(CalculatedColor).Append("\n");
            sb.Append("  OverrideColor: ").Append(OverrideColor).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}