#ifndef SWAGGER_TYPES_LolCollectionsCollectionsRune_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsRune_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsRune {
    // 
    uint32_t runeId;
    // 
    uint32_t runeSlotId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRune& v) {
    j["runeId"] = v.runeId;
    j["runeSlotId"] = v.runeSlotId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRune& v) {
    v.runeId = j.at("runeId").get<uint32_t>;
    v.runeSlotId = j.at("runeSlotId").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsRune_HPP
