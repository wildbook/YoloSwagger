using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLootPlayerLootNotification
    {
        [DataMember(Name = "acknowledged")]
        bool Acknowledged { get; set; }

        [DataMember(Name = "count")]
        int Count { get; set; }

        [DataMember(Name = "id")]
        string Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootPlayerLootNotification {\n");
            sb.Append("  Acknowledged: ").Append(Acknowledged).Append("\n");
            sb.Append("  Count: ").Append(Count).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}