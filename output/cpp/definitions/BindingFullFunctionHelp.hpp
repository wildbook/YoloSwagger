#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullArgumentHelp.hpp"
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes a function.
  struct BindingFullFunctionHelp_t {
    std::string async;
    std::string description;
    std::string help;
    std::vector<std::string> tags;
    std::string name;
    std::string nameSpace;
    BindingFullTypeIdentifier_t returns;
    std::vector<BindingFullArgumentHelp_t> arguments;
    bool threadSafe;
  };

  inline void to_json(nlohmann::json& j, const BindingFullFunctionHelp_t& v) {
    j["async"] = v.async;
    j["description"] = v.description;
    j["help"] = v.help;
    j["tags"] = v.tags;
    j["name"] = v.name;
    j["nameSpace"] = v.nameSpace;
    j["returns"] = v.returns;
    j["arguments"] = v.arguments;
    j["threadSafe"] = v.threadSafe;
  }

  inline void from_json(const nlohmann::json& j, BindingFullFunctionHelp_t& v) {
    v.async = j.at("async").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.help = j.at("help").get<std::string>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.name = j.at("name").get<std::string>();
    v.nameSpace = j.at("nameSpace").get<std::string>();
    v.returns = j.at("returns").get<BindingFullTypeIdentifier_t>();
    v.arguments = j.at("arguments").get<std::vector<BindingFullArgumentHelp_t>>();
    v.threadSafe = j.at("threadSafe").get<bool>();
  }
  inline std::string to_string(const BindingFullFunctionHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
