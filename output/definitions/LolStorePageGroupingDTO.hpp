#ifndef SWAGGER_TYPES_LolStorePageGroupingDTO_HPP
#define SWAGGER_TYPES_LolStorePageGroupingDTO_HPP
#include <json.hpp>
#include "LolStoreItemKey.hpp"
namespace test {
  // 
  struct LolStorePageGroupingDTO {
'    // 
    bool grouped;
    // 
    bool hidden;
    // 
    std::vector<LolStoreItemKey> items;
  };

  void to_json(nlohmann::json& j, const LolStorePageGroupingDTO& v) {
    j["grouped"] = v.grouped;
    j["hidden"] = v.hidden;
    j["items"] = v.items;
  }

  void from_json(const nlohmann::json& j, LolStorePageGroupingDTO& v) {
    v.grouped = j.at("grouped").get<bool>;
    v.hidden = j.at("hidden").get<bool>;
    v.items = j.at("items").get<std::vector<LolStoreItemKey>>;
  }

}
#endif // SWAGGER_TYPES_LolStorePageGroupingDTO_HPP
