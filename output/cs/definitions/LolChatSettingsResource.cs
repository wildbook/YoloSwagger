using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatSettingsResource
    {
        [DataMember(Name = "data")]
        public dynamic Data { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatSettingsResource {\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}