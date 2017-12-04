#ifndef SWAGGER_TYPES_CollectionsLcdsSlotEntry_HPP
#define SWAGGER_TYPES_CollectionsLcdsSlotEntry_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct CollectionsLcdsSlotEntry {
    // 
    uint32_t runeId;
    // 
    uint32_t runeSlotId;
  };

  void to_json(nlohmann::json& j, const CollectionsLcdsSlotEntry& v) {
    j["runeId"] = v.runeId;
    j["runeSlotId"] = v.runeSlotId;
  }

  void from_json(const nlohmann::json& j, CollectionsLcdsSlotEntry& v) {
    v.runeId = j.at("runeId").get<uint32_t>;
    v.runeSlotId = j.at("runeSlotId").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_CollectionsLcdsSlotEntry_HPP
