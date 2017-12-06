using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPlayerBehaviorBanNotification
    {
        [DataMember(Name = "displayReformCard")]
        bool DisplayReformCard { get; set; }

        [DataMember(Name = "id")]
        ulong Id { get; set; }

        [DataMember(Name = "isPermaBan")]
        bool IsPermaBan { get; set; }

        [DataMember(Name = "reason")]
        string Reason { get; set; }

        [DataMember(Name = "source")]
        LolPlayerBehaviorNotificationSource Source { get; set; }

        [DataMember(Name = "timeUntilBanExpires")]
        ulong TimeUntilBanExpires { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPlayerBehaviorBanNotification {\n");
            sb.Append("  DisplayReformCard: ").Append(DisplayReformCard).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsPermaBan: ").Append(IsPermaBan).Append("\n");
            sb.Append("  Reason: ").Append(Reason).Append("\n");
            sb.Append("  Source: ").Append(Source).Append("\n");
            sb.Append("  TimeUntilBanExpires: ").Append(TimeUntilBanExpires).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}