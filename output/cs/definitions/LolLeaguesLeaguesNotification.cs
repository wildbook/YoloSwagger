using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLeaguesLeaguesNotification
    {
        [DataMember(Name = "severity")]
        LolLeaguesSeverity Severity { get; set; }

        [DataMember(Name = "type")]
        string Type { get; set; }

        [DataMember(Name = "acknowledgedByPlayer")]
        bool AcknowledgedByPlayer { get; set; }

        [DataMember(Name = "priority")]
        ulong Priority { get; set; }

        [DataMember(Name = "titleType")]
        string TitleType { get; set; }

        [DataMember(Name = "data")]
        LolLeaguesLeagueNotificationItem Data { get; set; }

        [DataMember(Name = "id")]
        ulong Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesLeaguesNotification {\n");
            sb.Append("  Severity: ").Append(Severity).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  AcknowledgedByPlayer: ").Append(AcknowledgedByPlayer).Append("\n");
            sb.Append("  Priority: ").Append(Priority).Append("\n");
            sb.Append("  TitleType: ").Append(TitleType).Append("\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}