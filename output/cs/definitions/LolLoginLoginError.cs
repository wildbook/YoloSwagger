using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLoginLoginError
    {
        [DataMember(Name = "messageId")]
        string MessageId { get; set; }

        [DataMember(Name = "description")]
        string Description { get; set; }

        [DataMember(Name = "id")]
        string Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLoginLoginError {\n");
            sb.Append("  MessageId: ").Append(MessageId).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}