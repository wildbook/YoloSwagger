#ifndef SWAGGER_TYPES_LolPerksPerkUISlot_HPP
#define SWAGGER_TYPES_LolPerksPerkUISlot_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolPerksPerkUISlot {
'    // 
    std::vector<int32_t> perks;
    // 
    std::string slotLabel;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const LolPerksPerkUISlot& v) {
    j["perks"] = v.perks;
    j["slotLabel"] = v.slotLabel;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LolPerksPerkUISlot& v) {
    v.perks = j.at("perks").get<std::vector<int32_t>>;
    v.slotLabel = j.at("slotLabel").get<std::string>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPerksPerkUISlot_HPP
