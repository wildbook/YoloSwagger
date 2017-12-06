#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksGameCustomizationDTO_t {
    std::string category;
    std::string content;
    uint64_t queueType;
  };

  inline void to_json(nlohmann::json& j, const LolPerksGameCustomizationDTO_t& v) {
    j["category"] = v.category;
    j["content"] = v.content;
    j["queueType"] = v.queueType;
  }

  inline void from_json(const nlohmann::json& j, LolPerksGameCustomizationDTO_t& v) {
    v.category = j.at("category").get<std::string>();
    v.content = j.at("content").get<std::string>();
    v.queueType = j.at("queueType").get<uint64_t>();
  }
}
