#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SanitizerSanitizerStatus_t {
    uint32_t breakingCharsCount;
    uint32_t projectedCharsCount;
    std::string locale;
    bool ready;
    uint32_t allowedCharsCount;
    std::string region;
    std::map<std::string, uint32_t> filteredWordCountsByLevel;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizerStatus_t& v) {
    j["breakingCharsCount"] = v.breakingCharsCount;
    j["projectedCharsCount"] = v.projectedCharsCount;
    j["locale"] = v.locale;
    j["ready"] = v.ready;
    j["allowedCharsCount"] = v.allowedCharsCount;
    j["region"] = v.region;
    j["filteredWordCountsByLevel"] = v.filteredWordCountsByLevel;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizerStatus_t& v) {
    v.breakingCharsCount = j.at("breakingCharsCount").get<uint32_t>();
    v.projectedCharsCount = j.at("projectedCharsCount").get<uint32_t>();
    v.locale = j.at("locale").get<std::string>();
    v.ready = j.at("ready").get<bool>();
    v.allowedCharsCount = j.at("allowedCharsCount").get<uint32_t>();
    v.region = j.at("region").get<std::string>();
    v.filteredWordCountsByLevel = j.at("filteredWordCountsByLevel").get<std::map<std::string, uint32_t>>();
  }
  inline std::string to_string(const SanitizerSanitizerStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
