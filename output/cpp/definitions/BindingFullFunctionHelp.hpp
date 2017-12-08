#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
#include "BindingFullArgumentHelp.hpp"
namespace leagueapi {
  // Describes a function.
  struct BindingFullFunctionHelp_t {
    std::string help;
    std::vector<std::string> tags;
    std::string description;
    std::string nameSpace;
    bool threadSafe;
    BindingFullTypeIdentifier_t returns;
    std::vector<BindingFullArgumentHelp_t> arguments;
    std::string async;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const BindingFullFunctionHelp_t& v) {
    j["help"] = v.help;
    j["tags"] = v.tags;
    j["description"] = v.description;
    j["nameSpace"] = v.nameSpace;
    j["threadSafe"] = v.threadSafe;
    j["returns"] = v.returns;
    j["arguments"] = v.arguments;
    j["async"] = v.async;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, BindingFullFunctionHelp_t& v) {
    v.help = j.at("help").get<std::string>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.description = j.at("description").get<std::string>();
    v.nameSpace = j.at("nameSpace").get<std::string>();
    v.threadSafe = j.at("threadSafe").get<bool>();
    v.returns = j.at("returns").get<BindingFullTypeIdentifier_t>();
    v.arguments = j.at("arguments").get<std::vector<BindingFullArgumentHelp_t>>();
    v.async = j.at("async").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const BindingFullFunctionHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
