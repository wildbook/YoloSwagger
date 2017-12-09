using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSuggestedPlayersSuggestedPlayersFriend
    {
        [DataMember(Name = "availability")]
        public string Availability { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSuggestedPlayersSuggestedPlayersFriend {\n");
            sb.Append("  Availability: ").Append(Availability).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}