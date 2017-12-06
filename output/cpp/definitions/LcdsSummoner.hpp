#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsSummoner_t {
    std::string name;
    uint64_t sumId;
  };

  inline void to_json(nlohmann::json& j, const LcdsSummoner_t& v) {
    j["name"] = v.name;
    j["sumId"] = v.sumId;
  }

  inline void from_json(const nlohmann::json& j, LcdsSummoner_t& v) {
    v.name = j.at("name").get<std::string>();
    v.sumId = j.at("sumId").get<uint64_t>();
  }
}
