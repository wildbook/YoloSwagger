#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SanitizerSanitizerStatus_t {
    bool ready;
    uint32_t allowedCharsCount;
    uint32_t projectedCharsCount;
    std::string region;
    std::map<std::string, uint32_t> filteredWordCountsByLevel;
    std::string locale;
    uint32_t breakingCharsCount;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizerStatus_t& v) {
    j["ready"] = v.ready;
    j["allowedCharsCount"] = v.allowedCharsCount;
    j["projectedCharsCount"] = v.projectedCharsCount;
    j["region"] = v.region;
    j["filteredWordCountsByLevel"] = v.filteredWordCountsByLevel;
    j["locale"] = v.locale;
    j["breakingCharsCount"] = v.breakingCharsCount;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizerStatus_t& v) {
    v.ready = j.at("ready").get<bool>();
    v.allowedCharsCount = j.at("allowedCharsCount").get<uint32_t>();
    v.projectedCharsCount = j.at("projectedCharsCount").get<uint32_t>();
    v.region = j.at("region").get<std::string>();
    v.filteredWordCountsByLevel = j.at("filteredWordCountsByLevel").get<std::map<std::string, uint32_t>>();
    v.locale = j.at("locale").get<std::string>();
    v.breakingCharsCount = j.at("breakingCharsCount").get<uint32_t>();
  }
  inline std::string to_string(const SanitizerSanitizerStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
