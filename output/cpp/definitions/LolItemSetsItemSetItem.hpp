#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolItemSetsItemSetItem_t {
    uint16_t_t count;
    std::string_t id;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSetItem_t& v) {
    j["count"] = v.count;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSetItem_t& v) {
    v.count = j.at("count").get<uint16_t_t>();
    v.id = j.at("id").get<std::string_t>();
  }
  inline std::string to_string(const LolItemSetsItemSetItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
