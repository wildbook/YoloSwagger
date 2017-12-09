using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLeaguesLeagueStanding
    {
        [DataMember(Name = "apexDaysUntilDecay")]
        public long ApexDaysUntilDecay { get; set; }

        [DataMember(Name = "emblems")]
        public LolLeaguesLeagueEmblem[] Emblems { get; set; }

        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "inactive")]
        public bool Inactive { get; set; }

        [DataMember(Name = "inactivityStatus")]
        public string InactivityStatus { get; set; }

        [DataMember(Name = "losses")]
        public ulong Losses { get; set; }

        [DataMember(Name = "miniseriesResults")]
        public LolLeaguesMiniseries[] MiniseriesResults { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "pendingDemotion")]
        public bool PendingDemotion { get; set; }

        [DataMember(Name = "pendingPromotion")]
        public bool PendingPromotion { get; set; }

        [DataMember(Name = "points")]
        public long Points { get; set; }

        [DataMember(Name = "position")]
        public ulong Position { get; set; }

        [DataMember(Name = "positionDelta")]
        public long PositionDelta { get; set; }

        [DataMember(Name = "previousPosition")]
        public ulong PreviousPosition { get; set; }

        [DataMember(Name = "wins")]
        public ulong Wins { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesLeagueStanding {\n");
            sb.Append("  ApexDaysUntilDecay: ").Append(ApexDaysUntilDecay).Append("\n");
            sb.Append("  Emblems: ").Append(Emblems).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Inactive: ").Append(Inactive).Append("\n");
            sb.Append("  InactivityStatus: ").Append(InactivityStatus).Append("\n");
            sb.Append("  Losses: ").Append(Losses).Append("\n");
            sb.Append("  MiniseriesResults: ").Append(MiniseriesResults).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  PendingDemotion: ").Append(PendingDemotion).Append("\n");
            sb.Append("  PendingPromotion: ").Append(PendingPromotion).Append("\n");
            sb.Append("  Points: ").Append(Points).Append("\n");
            sb.Append("  Position: ").Append(Position).Append("\n");
            sb.Append("  PositionDelta: ").Append(PositionDelta).Append("\n");
            sb.Append("  PreviousPosition: ").Append(PreviousPosition).Append("\n");
            sb.Append("  Wins: ").Append(Wins).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}