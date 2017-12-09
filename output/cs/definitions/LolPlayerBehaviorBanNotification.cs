using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPlayerBehaviorBanNotification
    {
        [DataMember(Name = "displayReformCard")]
        public bool DisplayReformCard { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "isPermaBan")]
        public bool IsPermaBan { get; set; }

        [DataMember(Name = "reason")]
        public string Reason { get; set; }

        [DataMember(Name = "source")]
        public LolPlayerBehaviorNotificationSource Source { get; set; }

        [DataMember(Name = "timeUntilBanExpires")]
        public ulong TimeUntilBanExpires { get; set; }

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