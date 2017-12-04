#ifndef SWAGGER_TYPES_LolItemSetsItemSetItem_HPP
#define SWAGGER_TYPES_LolItemSetsItemSetItem_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolItemSetsItemSetItem {
'    // 
    uint16_t count;
    // 
    std::string id;
  };

  void to_json(nlohmann::json& j, const LolItemSetsItemSetItem& v) {
    j["count"] = v.count;
    j["id"] = v.id;
  }

  void from_json(const nlohmann::json& j, LolItemSetsItemSetItem& v) {
    v.count = j.at("count").get<uint16_t>;
    v.id = j.at("id").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolItemSetsItemSetItem_HPP
