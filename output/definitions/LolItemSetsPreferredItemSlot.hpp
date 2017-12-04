#ifndef SWAGGER_TYPES_LolItemSetsPreferredItemSlot_HPP
#define SWAGGER_TYPES_LolItemSetsPreferredItemSlot_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolItemSetsPreferredItemSlot {
'    // 
    std::string id;
    // 
    int16_t preferredItemSlot;
  };

  void to_json(nlohmann::json& j, const LolItemSetsPreferredItemSlot& v) {
    j["id"] = v.id;
    j["preferredItemSlot"] = v.preferredItemSlot;
  }

  void from_json(const nlohmann::json& j, LolItemSetsPreferredItemSlot& v) {
    v.id = j.at("id").get<std::string>;
    v.preferredItemSlot = j.at("preferredItemSlot").get<int16_t>;
  }

}
#endif // SWAGGER_TYPES_LolItemSetsPreferredItemSlot_HPP
