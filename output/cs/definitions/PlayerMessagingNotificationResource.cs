using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PlayerMessagingNotificationResource
    {
        [DataMember(Name = "body")]
        string Body { get; set; }

        [DataMember(Name = "msgId")]
        string MsgId { get; set; }

        [DataMember(Name = "status")]
        int Status { get; set; }

        [DataMember(Name = "id")]
        int Id { get; set; }

        [DataMember(Name = "title")]
        string Title { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerMessagingNotificationResource {\n");
            sb.Append("  Body: ").Append(Body).Append("\n");
            sb.Append("  MsgId: ").Append(MsgId).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}