using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootLootRecipeGdsResource
    {
        [DataMember(Name = "placeholder")]
        public string Placeholder { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootLootRecipeGdsResource {\n");
            sb.Append("  Placeholder: ").Append(Placeholder).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}