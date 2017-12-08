using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolSimpleDialogMessagesMessage
    {
        [DataMember(Name = "body")]
        dynamic Body { get; set; }

        [DataMember(Name = "type")]
        string Type { get; set; }

        [DataMember(Name = "id")]
        long Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSimpleDialogMessagesMessage {\n");
            sb.Append("  Body: ").Append(Body).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}