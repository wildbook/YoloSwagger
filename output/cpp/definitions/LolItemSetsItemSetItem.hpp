#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolItemSetsItemSetItem_t {
    std::string id;
    uint16_t count;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSetItem_t& v) {
    j["id"] = v.id;
    j["count"] = v.count;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSetItem_t& v) {
    v.id = j.at("id").get<std::string>();
    v.count = j.at("count").get<uint16_t>();
  }
  inline std::string to_string(const LolItemSetsItemSetItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
