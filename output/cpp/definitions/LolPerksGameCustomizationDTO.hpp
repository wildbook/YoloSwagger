#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksGameCustomizationDTO_t {
    uint64_t queueType;
    std::string category;
    std::string content;
  };

  inline void to_json(nlohmann::json& j, const LolPerksGameCustomizationDTO_t& v) {
    j["queueType"] = v.queueType;
    j["category"] = v.category;
    j["content"] = v.content;
  }

  inline void from_json(const nlohmann::json& j, LolPerksGameCustomizationDTO_t& v) {
    v.queueType = j.at("queueType").get<uint64_t>();
    v.category = j.at("category").get<std::string>();
    v.content = j.at("content").get<std::string>();
  }
  inline std::string to_string(const LolPerksGameCustomizationDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
