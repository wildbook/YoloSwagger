#ifndef SWAGGER_TYPES_LolCollectionsCollectionsRune_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsRune_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolCollectionsCollectionsRune {
'    // 
    uint32_t runeId;
    // 
    uint32_t runeSlotId;
  };

  void to_json(nlohmann::json& j, const LolCollectionsCollectionsRune& v) {
    j["runeId"] = v.runeId;
    j["runeSlotId"] = v.runeSlotId;
  }

  void from_json(const nlohmann::json& j, LolCollectionsCollectionsRune& v) {
    v.runeId = j.at("runeId").get<uint32_t>;
    v.runeSlotId = j.at("runeSlotId").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsRune_HPP
