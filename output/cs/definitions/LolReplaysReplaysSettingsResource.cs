using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolReplaysReplaysSettingsResource
    {
        [DataMember(Name = "data")]
        public LolReplaysReplaysSettingsData Data { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolReplaysReplaysSettingsResource {\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}